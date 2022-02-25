void function1(struct student_record_t *p)
{
    // dereference p and then check if it's NULL
    int num = p->num;
    if (p)
        check_student_num(num);
}

void function2()
{
    const char *p2 = NULL;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            p2 = str + i;
            break;
        }
    }

    // p2 is NULL if str doesn't have a space. If str always has a
    // a space then the condition (str[i] != '\0') would be redundant
    return p[1];
}

void function3(int a)
{
    struct student_record_t *p3 = NULL;
    if (flag == 1)
        p3 = student_record_p_1;

    // if flag is not 1 then p3 is NULL
    p3->num = 0;
}
