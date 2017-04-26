#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myglwidget.h"
#include <QObject>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Programmierung von Signals, Slot mit einem eindrem Slot.
    connect(ui->sldRotationZ,SIGNAL(valueChanged(int)),
            ui->sbxRotationZ, SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
