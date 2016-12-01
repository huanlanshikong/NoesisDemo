#pragma once
#include "pch.h"
#include "MyNsTest.h"
#include <NoesisGUI.h>
#include "TitleItem.h"

using namespace Noesis;

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

	//TitleItem *itemPanel = new TitleItem();

	Noesis::StackPanel *panel = FindName<StackPanel>("TitlePanel");
	Noesis::Gui::UIElementCollection* collection = panel->GetChildren();
	collection->Clear();
	for (auto item : titleItems) {
		TitleItem *itemPanel = new TitleItem();
		Noesis::Label *label = itemPanel->FindName<Label>("titleText");
		label->SetContent(item.c_str());
		//label->GetParent()->RemoveLogicalChild(label);
		collection->Add(itemPanel);
	}
}