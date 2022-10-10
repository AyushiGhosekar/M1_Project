#include<unity.h>
extern int admin_log();
extern int random_number();
void testRandom_number(void);
void testAdmin_log(void);


void setUp(void)
{

}

void tearDown(void)
{

}

int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(testRandom_number);
    RUN_TEST(testAdmin_log);
    return (UnityEnd());
}

void testRandom_number(void)
{

    TEST_ASSERT_EQUAL(1,random_number(1));
}

void testAdmin_log(void)
{
    TEST_ASSERT_EQUAL_STRING(Admin, admin_log(Admin));
}
