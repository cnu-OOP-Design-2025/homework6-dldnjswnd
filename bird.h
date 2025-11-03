#pragma once
#include <iostream>
#include <string>

class Bird
{
protected:
    std::string species;

public:
    Bird() = default;
    explicit Bird(std::string s) : species(std::move(s))
    {
        std::cout << species << " has borned" << std::endl;
    }

    virtual ~Bird()
    {
        std::cout << species << " has died" << std::endl;
    }

    virtual void display()
    {
        std::cout << "Species: " << species << std::endl;
    }

    virtual void fly()
    {
        std::cout << "This bird can fly." << std::endl;
    }

    virtual void swim()
    {
        std::cout << "This bird can swim." << std::endl;
    }

    virtual void cry() const = 0;
    virtual void quack() const { cry(); }
};

class Duck final : public Bird
{
public:
    Duck() : Bird("Duck") { cry(); }
    ~Duck() override { cry(); }

    void cry() const override
    {
        std::cout << "Quack!" << std::endl;
    }
};

class Penguin final : public Bird
{
public:
    Penguin() : Bird("Penguin") { cry(); }
    ~Penguin() override { cry(); }

    void cry() const override
    {
        std::cout << "Squawk!" << std::endl;
    }

    void fly() override
    {
        std::cout << "This bird can't fly." << std::endl;
    }
};

class Eagle final : public Bird
{
public:
    Eagle() : Bird("Eagle") { cry(); }
    ~Eagle() override { cry(); }

    void cry() const override
    {
        std::cout << "Screech!" << std::endl;
    }

    void swim() override
    {
        std::cout << "This bird can't swim." << std::endl;
    }
};
