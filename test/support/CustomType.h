#ifndef __CUSTOM_TYPE_H__
#define __CUSTOM_TYPE_H__

#include  "Coordinate.h"

#define UNITY_TEST_ASSERT_EQUAL(expected, actual, line, message) \
								assertEqualCoordinate(expected, actul, line, message)

#define TEST_ASSERT_EQUAL_Coordinate(expectedCoor, actualCoor)\
		assertEqualCoordinate(expectedCoor, actualCoor, __LINE__, NULL);
								
void assertEqualCoordinate(Coordinate expected,
							Coordinate actual, 	//actual instance
							int line, 			//
							char *message);

#endif