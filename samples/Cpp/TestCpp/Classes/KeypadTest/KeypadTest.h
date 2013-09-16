#ifndef _KEYPAD_TEST_H_
#define _KEYPAD_TEST_H_

#include "cocos2d.h"
#include "../testBasic.h"

class KeypadTest : public Layer
{
public:
    KeypadTest();
    ~KeypadTest();

    virtual void onKeyReleased(KeyboardEvent::KeyCode keycode, Event* event) override;

private:
    LabelTTF*            _label;
};

class KeypadTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

#endif
