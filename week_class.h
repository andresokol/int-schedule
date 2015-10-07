using namespace std;

Class Lesson {
    string lesson_name;
    string teacher_name;
};
// Прсосто указание урока и имени учителя для последующей обработки

Class Week {
    Lesson monday[10];
    Lesson tuesday[10];
    Lesson wednesday[10];
    Lesson thursday[10];
    Lesson friday[10];
    Lesson saturday[10];
};
// Работаем уже с рссписанием. Расписание для одново класса на неделю. Все рассписание предлагается хранить как массив Week для всех классов
