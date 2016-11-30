#pragma once
#include "pch.h"
#include "MyNsTest.h"

MyNsTest::MyNsTest(){
	Noesis::GUI::LoadComponent(this, "MyWindow.xaml");
	bindData();
}

MyNsTest::~MyNsTest(){
}

void MyNsTest::bindData()
{
	titleItems.push_back("str1");
	titleItems.push_back("str2");
	titleItems.push_back("str3");
	titleItems.push_back("str4");
	item = "111";
	NsProp("Items", &MyNsTest::titleItems);
}