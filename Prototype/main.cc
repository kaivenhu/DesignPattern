#include <iostream>

#include <prototype/resume.h>

using namespace prototype;
using std::cout;
using std::endl;

int main (void)
{
    Resume resume("Kevin", "man");
    Resume resume_move(Resume("null", "null"));

    resume.SetWorkExperience("2010-2013", "S company");


    Resume resume_2 = resume;
    resume_2.SetWorkExperience("2013-2016", "G company");


    Resume resume_3 = resume_2;
    resume_3.name("Kevin Hu");

    cout << "-- Resume 1 --" << endl;
    resume.Display();
    cout << "-- Resume 2 --" << endl;
    resume_2.Display();
    cout << "-- Resume 3 --" << endl;
    resume_3.Display();

    resume_move = std::move(resume);
    cout << "-- Resume move --" << endl;
    resume_move.Display();

    return 0;
}
