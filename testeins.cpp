#include "pch.h"
#include "Aufgabeeins.h"

TEST(TestCaseEins, Testa) {
	int i = 5;
	i = i << 2;
	EXPECT_EQ(i, 20);
}

TEST(TestCaseEins, Shiftthree) {
	int i = 1;
	i = i << 3;
	EXPECT_EQ(i, 8);
}

TEST(TestCaseEins, Shiftfour) {
	int i = 1;
	i = i << 4;
	EXPECT_EQ(i, 16);
}

TEST(TestCaseEins, Shiftfive) {
	int i = 1;
	i = i << 5;
	EXPECT_EQ(i, 32);
}

TEST(TestCaseEins, Testb) {
	int j = 10;
	j = j >> 1;
	EXPECT_EQ(j, 5);
}

TEST(TestCaseEins, Testc) {
	Aufgabeeins eins;
	int i = 5;
	i = i << 2;
	int j = 10;
	j >> 1;
	eins.ausgabe(i, j);
}