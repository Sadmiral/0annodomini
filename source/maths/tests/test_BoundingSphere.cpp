/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include "precompiled.h"
#include "lib/external_libraries/libsdl.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_TestBoundingSphere_init = false;
#include "F:\Users\Sadmiral\IDKrepot\0ad\source\maths\tests\test_BoundingSphere.h"

static TestBoundingSphere suite_TestBoundingSphere;

static CxxTest::List Tests_TestBoundingSphere = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBoundingSphere( "../../../source/maths/tests/test_BoundingSphere.h", 25, "TestBoundingSphere", suite_TestBoundingSphere, Tests_TestBoundingSphere );

static class TestDescription_suite_TestBoundingSphere_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBoundingSphere_test_basic() : CxxTest::RealTestDescription( Tests_TestBoundingSphere, suiteDescription_TestBoundingSphere, 28, "test_basic" ) {}
 void runTest() { suite_TestBoundingSphere.test_basic(); }
} testDescription_suite_TestBoundingSphere_test_basic;

static class TestDescription_suite_TestBoundingSphere_test_intersections : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBoundingSphere_test_intersections() : CxxTest::RealTestDescription( Tests_TestBoundingSphere, suiteDescription_TestBoundingSphere, 68, "test_intersections" ) {}
 void runTest() { suite_TestBoundingSphere.test_intersections(); }
} testDescription_suite_TestBoundingSphere_test_intersections;

