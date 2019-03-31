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

bool suite_TestWdbgSym_init = false;
#include "F:\Users\Sadmiral\IDKrepot\0ad\source\lib\sysdep\os\win\tests\test_wdbg_sym.h"

static TestWdbgSym suite_TestWdbgSym;

static CxxTest::List Tests_TestWdbgSym = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestWdbgSym( "../../../source/lib/sysdep/os/win/tests/test_wdbg_sym.h", 77, "TestWdbgSym", suite_TestWdbgSym, Tests_TestWdbgSym );

static class TestDescription_suite_TestWdbgSym_test_stack_trace : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestWdbgSym_test_stack_trace() : CxxTest::RealTestDescription( Tests_TestWdbgSym, suiteDescription_TestWdbgSym, 292, "test_stack_trace" ) {}
 void runTest() { suite_TestWdbgSym.test_stack_trace(); }
} testDescription_suite_TestWdbgSym_test_stack_trace;

static class TestDescription_suite_TestWdbgSym_test_stack_walk : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestWdbgSym_test_stack_walk() : CxxTest::RealTestDescription( Tests_TestWdbgSym, suiteDescription_TestWdbgSym, 297, "test_stack_walk" ) {}
 void runTest() { suite_TestWdbgSym.test_stack_walk(); }
} testDescription_suite_TestWdbgSym_test_stack_walk;

