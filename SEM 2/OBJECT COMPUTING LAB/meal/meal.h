#ifndef MEAL_H_INCLUDED
#define MEAL_H_INCLUDED
class Meal
{
    char entry[10];
    int calorie;
    public:
    Meal();
    Meal(char w[],int x);
    void operator*();
    Meal operator -();
    Meal operator+(Meal b);

};


#endif // MEAL_H_INCLUDED
