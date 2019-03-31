/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include "precompiled.h"
#include "lib/external_libraries/libsdl.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_TestEntityMap_init = false;
#include "F:\Users\Sadmiral\IDKrepot\0ad\source\simulation2\tests\test_EntityMap.h"

static TestEntityMap suite_TestEntityMap;

static CxxTest::List Tests_TestEntityMap = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestEntityMap( "../../../source/simulation2/tests/test_EntityMap.h", 26, "TestEntityMap", suite_TestEntityMap, Tests_TestEntityMap );

static class TestDescription_suite_TestEntityMap_test_insert : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEntityMap_test_insert() : CxxTest::RealTestDescription( Tests_TestEntityMap, suiteDescription_TestEntityMap, 37, "test_insert" ) {}
 void runTest() { suite_TestEntityMap.test_insert(); }
} testDescription_suite_TestEntityMap_test_insert;

static class TestDescription_suite_TestEntityMap_test_iterators : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEntityMap_test_iterators() : CxxTest::RealTestDescription( Tests_TestEntityMap, suiteDescription_TestEntityMap, 76, "test_iterators" ) {}
 void runTest() { suite_TestEntityMap.test_iterators(); }
} testDescription_suite_TestEntityMap_test_iterators;

static class TestDescription_suite_TestEntityMap_test_erase : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEntityMap_test_erase() : CxxTest::RealTestDescription( Tests_TestEntityMap, suiteDescription_TestEntityMap, 126, "test_erase" ) {}
 void runTest() { suite_TestEntityMap.test_erase(); }
} testDescription_suite_TestEntityMap_test_erase;

static class TestDescription_suite_TestEntityMap_test_clear : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEntityMap_test_clear() : CxxTest::RealTestDescription( Tests_TestEntityMap, suiteDescription_TestEntityMap, 163, "test_clear" ) {}
 void runTest() { suite_TestEntityMap.test_clear(); }
} testDescription_suite_TestEntityMap_test_clear;

static class TestDescription_suite_TestEntityMap_test_find : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEntityMap_test_find() : CxxTest::RealTestDescription( Tests_TestEntityMap, suiteDescription_TestEntityMap, 177, "test_find" ) {}
 void runTest() { suite_TestEntityMap.test_find(); }
} testDescription_suite_TestEntityMap_test_find;

static class TestDescription_suite_TestEntityMap_test_perf_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEntityMap_test_perf_DISABLED() : CxxTest::RealTestDescription( Tests_TestEntityMap, suiteDescription_TestEntityMap, 190, "test_perf_DISABLED" ) {}
 void runTest() { suite_TestEntityMap.test_perf_DISABLED(); }
} testDescription_suite_TestEntityMap_test_perf_DISABLED;

