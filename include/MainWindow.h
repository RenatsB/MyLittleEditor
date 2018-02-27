#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "MainScene.h"
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget * parent = nullptr);
  ~MainWindow() = default;

  void init(Scene* io_scene);
private slots:

private:
  Ui::MainWindow m_ui;

  Scene* m_gl = nullptr;
  void keyPressEvent(QKeyEvent * _event);
  void mouseMoveEvent(QMouseEvent * _event);
  void mousePressEvent(QMouseEvent *_event);
  void mouseReleaseEvent(QMouseEvent *_event);
};

#endif // MAINWINDOW_H
