//#include"Student.h"
#include"StudentIDCard.h"

int main()
{
    
    ControlPerson cp;

    Person* t1 = new Teacher("10, Mihaita Andrei, Mihai1234,teacher, mihai10@yahoo.com, 44");
    //cout<<t1->describe();


    /*Course c(100, "C#", "Data Science");

    cp.AddCourseToStudent("Cosmin", c);


    Person* p1 = cp.GetPersonbyName("Cosmin");

    Student* p = dynamic_cast<Student*>(p1);
    p->traverse();

    Student s;
    s.traverse();*/

    //ControlCourse cc;

    
   /* cc.add_course(new Course("10,Advanced Programming,Informatics"));
    cc.erase_course(5);
    cc.update_course(6,"Geometry 2", "Math");
    cout<<cc.GetCourseByName("Geometry 2")->describe();*/

    StudentIDCard sc("1,10,ZX789");
    cout<<sc.describe();

}

