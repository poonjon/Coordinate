#include "unity.h"
#include "CustomType.h"
void assertEqualCoordinate( Coordinate expected, //expeced instance
							Coordinate actual, 	//actual instance
							int line, 			//
							char *message){

		UNITY_TEST_ASSERT_EQUAL_INT (expected.x,actual.x,line,NULL);
		UNITY_TEST_ASSERT_EQUAL_INT (expected.y,actual.y,line,NULL);
}