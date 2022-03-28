#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <qimage.h>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QListWidget>
#include <QListWidgetItem>
#include <iostream>
#include <fstream>
#include <stack>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT;

public:
	MainWindow(QWidget* parent = 0);
	~MainWindow();

private slots:
	void OpenFile();
	void OpenRandomFile();
	void ConvertToGrayScale();
	void ApplyGaussianFilter();
	void SkullStripping();

private:
	Ui::MainWindow* ui;
	cv::Mat image;

	void CreateActions();
	cv::Mat OpenImage();
	cv::Mat OpenRandomImage();
	void ClearLabels();
};