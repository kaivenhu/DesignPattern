include Makefile.inc

EXEC=main


.PHONY: all clean $(SUB_DIR)

all: $(SUB_DIR) $(EXEC)

clean: $(SUB_DIR)
	rm -f $(EXEC)

$(SUB_DIR):
	$(MAKE) -C $@ $(MAKECMDGOALS);

$(EXEC): %:%.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
	rm -f $^

