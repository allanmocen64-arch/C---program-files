#include <stdio.h>
#include <stdbool.h>
#include <string.h>

                    //structs-these are custrom containers that hold multiple pieces of related information

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool fullTime;

}Student;
void studentInfo( Student student);


int main(){
   
    
    Student student1={"John",15,4.5,true};
    Student student2={"Moses",18,2.5,false};
    Student student3={"Duncun",17,3.5,true};
    Student student4={"Victor",16,3.5,false};

    studentInfo(student1);
    studentInfo(student2);
    studentInfo(student3);
    studentInfo(student4);
   
    



  return 0;
}
void studentInfo( Student student){
    printf("NAME-%s\n",student.name);
    printf("AGE-%d\n",student.age);
    printf("GPA-%.2f\n",student.gpa);
    printf("FULLLTIME-%s\n",(student.fullTime) ? "Yes":"No");
    printf("\n");
    
                          
}
