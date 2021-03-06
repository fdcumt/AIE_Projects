#ifndef _DEATHSTATE_H_
#define _DEATHSTATE_H_
#include "GameState.h"
class DeathState : public GameState
{
public:
	// to be executed first upon entering the state
	void Init();
	// to be executed when state is popped from end of stack
	void Cleanup();
	void Pause();
	void Resume();
	// handles responses to inputs
	void HandleEvents(GameEngine* a_opGame);
	// occurs each frame
	void Update(GameEngine* a_opGame, double dt);
	// renders things to the screen
	void Draw(GameEngine* a_opGame);
	static DeathState* Instance(); //**verify that this is implemented correctly in cpp**
protected:
	DeathState() { }
private:
	static DeathState m_DeathState;
	//int m_iAlpha; //**used for fading out image**
	int m_iBG;	// background sprite ID
};
#endif