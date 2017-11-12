#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vm.h"

class VM : public QMainWindow
{
    Q_OBJECT

public:
    VM(QWidget *parent = Q_NULLPTR);

private:
    Ui::VMClass ui;
};
