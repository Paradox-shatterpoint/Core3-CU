/*
Copyright (C) 2014 CU Galaxies
*/

#ifndef SETCOMBATFEINTCOMMAND_H_
#define SETCOMBATFEINTCOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class SetCombatFeintCommand : public QueueCommand {
public:

	SetCombatFeintCommand(const String& name, ZoneProcessServer* server)
		: QueueCommand(name, server) {

	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) const {

		if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidLocomotions(creature))
			return INVALIDLOCOMOTION;

		return SUCCESS;
	}

};

#endif //SETCOMBATFEINTCOMMAND_H_
