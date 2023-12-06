#ifndef DRUGIPROZOR_H
#define DRUGIPROZOR_H

#include <QDialog>

namespace Ui {
class DrugiProzor;
}

class DrugiProzor : public QDialog
{
    Q_OBJECT

public:
    explicit DrugiProzor(QWidget *parent = nullptr);
    ~DrugiProzor();

private slots:
    void on_pbNazad2_clicked();

private:
    Ui::DrugiProzor *ui;
};


#endif // DRUGIPROZOR_H
