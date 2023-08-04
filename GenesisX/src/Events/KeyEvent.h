#pragma once

#include "Event.h"
#include <sstream>

namespace GenesisX
{

    class KeyEvent : public Event
    {
        protected:
            int m_KeyCode;
            KeyEvent(int keycode)
                : m_KeyCode(keycode) {}

        public:
            inline int GetKeyCode() const { return m_KeyCode; }
            EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)
    };

    class KeyPressedEvent : public KeyEvent
    {
        public:
            KeyPressedEvent(int keycode, int repeatCount)
                : KeyEvent(keycode), m_RepeatCount(repeatCount) {}

            inline int GetRepeatCount() const { return m_RepeatCount; }

            std::string ToString() const override
            {
                std::stringstream ss;
                ss << "KeyPressedEvent:" << m_KeyCode << " (" << m_RepeatCount << " repeats";
            }
            EVENT_CLASS_TYPE(KeyPressed)
        private:
            int m_RepeatCount;
    };

    class KeyReleasedEvent : public KeyEvent
    {
        public:
            KeyReleasedEvent(int keycode)
                : KeyEvent(keycode) {}
            std::string ToString() const override
            {
                std::stringstream ss;
                ss << "KeyReleasedEvent:" << m_KeyCode;
                return ss.str();
            }
            EVENT_CLASS_TYPE(KeyReleased)
    };

}