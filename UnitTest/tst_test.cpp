#include <QtTest>
// add necessary includes here

#include "/home/sara/Desktop/Sara/Desktop/05-tudu/tudu/headers/addtaskformtudu.h"
#include "/home/sara/Desktop/Sara/Desktop/05-tudu/tudu/headers/addtaskformweekly.h"
#include "/home/sara/Desktop/Sara/Desktop/05-tudu/tudu/headers/mainwindow.h"
#include "/home/sara/Desktop/Sara/Desktop/05-tudu/tudu/headers/task.h"
#include "/home/sara/Desktop/Sara/Desktop/05-tudu/tudu/headers/weeklyview.h"
#include "/home/sara/Desktop/Sara/Desktop/05-tudu/tudu/headers/tudulist.h"

class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

private slots:
    //add new task
    void test_case1();
    void test_case2();

};

test::test()
{

}

test::~test()
{

}

void test::test_case1()
{
    TuduList *tudulist = new TuduList();
    tudulist->show();
    tudulist->addTask("Task1","desc1",0);
    QStandardItemModel* model = static_cast<QStandardItemModel*>(tudulist->model());
        bool taskFound = false;
        for (int row = 0; row < model->rowCount(); ++row)
        {
            QModelIndex index = model->index(row, 0);
            QString taskName = model->data(index).toString();
            if (taskName == "Task1")
            {
                taskFound = true;
                break;
            }
        }

        QVERIFY(taskFound);

}
void test::test_case2(){
    MainWindow mainWindow;

    QSignalSpy signalSpy(&mainWindow, SIGNAL(recieveInTuduList(QString, QString, int)));

    mainWindow.on_addTaskButtonClicked();

    QList<QWidget *> openDialogs = QApplication::topLevelWidgets();
    QVERIFY(!openDialogs.isEmpty());

    AddTaskFormTudu *tDialog = qobject_cast<AddTaskFormTudu *>(openDialogs.first());
    QVERIFY(tDialog != nullptr);
    QVERIFY(signalSpy.isValid());

}


QTEST_MAIN(test)

#include "tst_test.moc"
