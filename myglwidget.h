#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QObject>

class MyGLWidget : public QOpenGLWidget
{
    //Für die Singals und Slots,sonst wird dies nicht registriert
public:
    Q_OBJECT
public:
    MyGLWidget();
    MyGLWidget(QWidget *parent) : QOpenGLWidget(parent) {}
   // void init();
   // void reshape(GLsizei width, GLsizei height );
   // void draw();
    void initializeGL();
    void resizeGL(GLsizei width, GLsizei height);
    void paintGL();

public slots:
    void receiveRotationZ(int);
};

#endif // MYGLWIDGET_H
