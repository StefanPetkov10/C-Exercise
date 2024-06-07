#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED

void task3(){

struct Student {
    char name[30];
    float avg_grade;
};

struct Class {
    char letter;
    int count;
    struct Student students[7];
    float avg_grade;
};

struct All_Classes {
    char name[50];
    int students_count;
    float avg_grade;
    struct Class students_a[7];
    struct Class students_b[7];
    struct Class students_c[7];
};

void student_with_excelent_grade(const struct Class class) {
    for (int i = 0; i < class.count; i++) {
        if (class.students[i].avg_grade< 5.50) continue;

        printf("%s\n", class.students[i].name);
    }
}

float average_grade_by_class(const struct Class class) {
    float total_grade = 0;

    for (int i = 0; i < class.count; i++) {
        total_grade += class.students[i].avg_grade;
    }

    return total_grade / class.count;
}

    struct Class students_a = {
        'A', 4,
        {
            {"Dragomir", 4.0},
            {"Petko", 3.0},
            {"Yana", 5.0},
            {"Sevda", 3.2}
        }
    };

    students_a.avg_grade =  average_grade_by_class(students_a);

    struct Class students_b = {
        'B', 6,
        {
            {"Vasilka", 3.0},
            {"Momchil", 6.0},
            {"Dimana", 5.3},
            {"liuba", 3.4},
            {"Genadi", 4.7},
            {"Dafinka", 3.3}
        }
    };

    students_b.avg_grade =  average_grade_by_class(students_b);

    struct Class students_c = {
        'C', 7,
        {
            {"Peio", 5.6},
            {"Dimo", 5.2},
            {"Evgeniya", 4.3},
            {"Savina", 6.0},
            {"Lilyana", 5.4},
            {"Bilyana", 4.8},
            {"Bozjurka", 4.7},
        }
    };

    students_c.avg_grade =  average_grade_by_class(students_c);

    struct All_Classes all_classes = {
        "Class of 2024", 17,
        (students_a.avg_grade + students_b.avg_grade + students_c.avg_grade) / 3,
        students_a, students_b, students_c
    };

    printf("Average grade class A: %.2f\n", average_grade_by_class(students_a));
    printf("Average grade class B: %.2f\n", average_grade_by_class(students_b));
    printf("Average grade class C: %.2f\n", average_grade_by_class(students_c));


    printf("\nStudent with excelent grade: \n");

    student_with_excelent_grade(students_a);
    student_with_excelent_grade(students_b);
    student_with_excelent_grade(students_c);

    printf("All classes avg grade %f", all_classes.avg_grade);

}

#endif // TASK3_H_INCLUDED
