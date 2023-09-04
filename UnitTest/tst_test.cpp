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
    void test_case3();
    void test_case4();
    void test_case5();
};

test::test()
{

}

test::~test()
{

}

void test::test_case1()
{
    qDebug()<<"task1";

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


void test::test_case2()
{
    qDebug()<<"task2";
    Task task("Sample Task", "Sample Description", QDateTime::currentDateTime(), QDateTime::currentDateTime().addSecs(3600), QTime(1, 0), 1, false);

    QCOMPARE(task.getName(), QString("Sample Task"));
    QCOMPARE(task.getDescription(), QString("Sample Description"));
    QCOMPARE(task.getPriority(), 1);
}

void test::test_case3()
{
    qDebug()<<"task3";
    Task task("Sample Task", "Sample Description", QDateTime::currentDateTime(), QDateTime::currentDateTime().addSecs(3600), QTime(1, 0), 1, false);

    QString fileName = "sample_task";
    task.save(fileName);
    QString saveLocation = QString("/home/sara/Desktop/Sara/Desktop/test.json");
    QFile file(saveLocation);
    file.open(QIODevice::ReadOnly);
    QString val = file.readAll();
    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());

    QVERIFY(!d.isNull());
}


void test::test_case4()
{
    qDebug()<<"task4 --- taskk";
    Task task("Sample Task", "Sample Description", QDateTime::currentDateTime(), QDateTime::currentDateTime().addSecs(3600), QTime(1, 0), 1, false);
    task.setPriority(0);
    QIcon highPriorityIcon = task.fetchIcon(task.getPriority());
    task.setPriority(1);
    QIcon midPriorityIcon = task.fetchIcon(task.getPriority());
    task.setPriority(2);
    QIcon lowPriorityIcon = task.fetchIcon(task.getPriority());

    QVERIFY(!highPriorityIcon.isNull());
    QVERIFY(!midPriorityIcon.isNull());
    QVERIFY(!lowPriorityIcon.isNull());
}
void test::test_case5(){
    qDebug()<<"task5";

    MainWindow mainWindow;

    QSignalSpy signalSpy(&mainWindow, SIGNAL(recieveInTuduList(QString, QString, int)));

    mainWindow.on_addTaskButtonClicked();

    QList<QWidget *> openDialogs = QApplication::topLevelWidgets();
    QVERIFY(!openDialogs.isEmpty());


    QVERIFY(signalSpy.isValid());

}
QTEST_MAIN(test)

#include "tst_test.moc"
