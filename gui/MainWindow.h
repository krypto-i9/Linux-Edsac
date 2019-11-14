#ifndef _MAINWINDOW_H
#define _MAINWINDOW_H

#include <SmrFramework.h>
#include <SmrAppFramework.h>
#include "Vdu.h"

using namespace SmrFramework;

class MainWindow : public Form {
  protected:
    Boolean   stopped;
    Button   *clearButton;
    Button   *resetButton;
    Button   *startButton;
    Button   *stepButton;
    Button   *stopButton;
    Control  *stopLamp;
    Vdu      *vdu1;
    Vdu      *vdu2;
    Vdu      *vdu3;
    Vdu      *vdu4;
    Vdu      *vdu5;
    Vdu      *vdu6;
    Timer    *timer;
    void InitializeComponent();
    void clearButtonPressed(void* sender, MouseEventArgs args);
    void resetButtonPressed(void* sender, MouseEventArgs args);
    void stepButtonPressed(void* sender, MouseEventArgs args);
    void startButtonPressed(void* sender, MouseEventArgs args);
    void stopButtonPressed(void* sender, MouseEventArgs args);
    void TimerTick(void* sender);
    void static _clearButtonPressed(void* obj, void* sender, EventArgs args);
    void static _resetButtonPressed(void* obj, void* sender, EventArgs args);
    void static _startButtonPressed(void* obj, void* sender, EventArgs args);
    void static _stepButtonPressed(void* obj, void* sender, EventArgs args);
    void static _stopButtonPressed(void* obj, void* sender, EventArgs args);
    void static _TimerTick(void* obj, void* sender, EventArgs args);
  public:
    MainWindow(int w, int h);
    ~MainWindow();
  };

#endif
