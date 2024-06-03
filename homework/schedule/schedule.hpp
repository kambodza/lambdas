#pragma once
#include <chrono>
#include <functional>
#include <string>
#include <thread>

void schedule(std::function<void()>func, std::chrono::seconds sec);
void schedule(std::function<void(int)>func, std::chrono::seconds sec, int a);
void schedule(std::function<void(std::string, double)>func, std::chrono::seconds sec, std::string str, int a);