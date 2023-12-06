#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pbClose_clicked();

    void on_pbStart_clicked();

    void on_pbAbout_clicked();

    void on_pbOK_clicked();

    void on_cbJedanIgrac_stateChanged(int arg1);

    void on_pbNazad_clicked();

    void on_pbStart2_clicked();


private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
