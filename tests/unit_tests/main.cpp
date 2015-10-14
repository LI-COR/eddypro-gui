#include <QTest>

//#include "testrunner.h"

#include "QtTestUtil/TestRegistry.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setAttribute(Qt::AA_Use96Dpi, true);

//    Test_AdvSpectralOptions_Class tc;
//    return QTest::qExec(&tc, argc, argv);

//    return RUN_ALL_TESTS(argc, argv);

    return QtTestUtil::TestRegistry::getInstance()->runTests(argc, argv);
}
