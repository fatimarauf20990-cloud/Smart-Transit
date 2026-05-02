#pragma once

class AppController {
private:
    // Private constructor so nobody can create another copy
    AppController() {}

public:
    // This is how you get the one and only copy of this controller
    static AppController& getInstance() {
        static AppController instance;
        return instance;
    }

    void initialise(); // This will setup your files and data
};