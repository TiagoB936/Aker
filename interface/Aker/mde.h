#ifndef MDE_H
#define MDE_H

#include <QMainWindow>
#include <addfunc.h>
#include <addmodule.h>

namespace Ui {
class MDE;
}

class MDE : public QMainWindow
{
    Q_OBJECT

public:
    explicit MDE(QWidget *parent = nullptr);

    addFunc *function;
    addModule *module;

    ~MDE();

private slots:

    void on_pbAddFunction_clicked();

    void on_pbExit_clicked();

    void on_pbAddModule_clicked();

private:
    Ui::MDE *ui;
};

#endif // MDE_H
