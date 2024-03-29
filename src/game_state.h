#ifndef GAME_STATE_H
#define GAME_STATE_H

// includes ...

class Game;  // Samo referenca da se ne uvode cirkularne zavisnosti!

class GameState{
public:
    // Sva moguća stanja igre.
    enum State {
        Welcome,
        Playing,
        Won,
        Lost,
        Exiting,
        Count     // Count će dati broj stanja. 
    };
    GameState(Game * game) : mpGame(game) {}

    // Metode koje ovise o stanju.
    virtual void update(sf::Time dt) = 0;
    virtual void handlePlayerInput(sf::Keyboard::Key code)= 0;
    virtual void render() = 0;
protected:
    Game * mpGame;
};

#endif // GAME_STATE_H
