#ifndef DECORATOR_SIDES_H_
#define DECORATOR_SIDES_H_
#include <decorator/side_decorator.h>

namespace decorator {


class Potato: public Side {
    public:
        Potato(): Side(30, "potato"){};
};

class Spinach: public Side {
    public:
        Spinach(): Side(30, "spinach"){};
};

class Mushroom: public Side {
    public:
        Mushroom(): Side(30, "mushroom"){};
};

class Tomato: public Side {
    public:
        Tomato(): Side(30, "tomato"){};
};

class Cheese: public Side {
    public:
        Cheese(): Side(30, "cheese"){};
};


}

#endif /* DECORATOR_SIDES_H_ */
