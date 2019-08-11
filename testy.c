#include "testy.h"
#include "funkcje.h"
#include "C:\Program Files (x86)\vcpkg-master\installed\x86-windows\include\cunit\Basic.h"
#include "C:\Program Files (x86)\vcpkg-master\installed\x86-windows\include\cunit\Cunit.h"
//#include "CUnit/CUnit.h"

//test functions
void test_dodaj()
{
	CU_ASSERT_EQUAL(dodaj(2, 3), 5);
	CU_ASSERT(dodaj(2, -3) == -1);
	CU_TEST(dodaj(999, 0) == 999);
}

void test_odejmij()
{
	CU_ASSERT_TRUE(odejmij(8, 3) == 5);
	CU_TEST(odejmij(8, -2) == 10);
	CU_ASSERT_NOT_EQUAL(odejmij(2, 3), 5);
}

void test_max()
{
	CU_ASSERT_EQUAL(max(2, 3), 3);
	CU_ASSERT_EQUAL(max(7, 7), 7);
	CU_ASSERT_EQUAL(max(2, -3), 2);
	CU_ASSERT_NOT_EQUAL(max(2, -3), -3);
}

//testing function
void testuj()
{
	 //test registry initialization
	CU_initialize_registry();
	
	 //adding a suite
	CU_pSuite pSuite = CU_add_suite("MySuite", NULL, NULL);
	
	//adding tests to the suite
	CU_add_test(pSuite, "test_dodaj", test_dodaj);
	CU_add_test(pSuite, "test_odejmij", test_odejmij);
	CU_add_test(pSuite, "test_max", test_max);
	
	//running all tests
	CU_basic_run_tests();
	
	//cleaning up registry
	CU_cleanup_registry();
	
}