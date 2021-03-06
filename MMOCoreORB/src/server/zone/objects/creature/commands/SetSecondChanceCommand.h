/*
Copyright (C) 2014 CU Galaxies
*/

#ifndef SETSECONDCHANCECOMMAND_H_
#define SETSECONDCHANCECOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class SetSecondChanceCommand : public QueueCommand {
public:

	SetSecondChanceCommand(const String& name, ZoneProcessServer* server)
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

#endif //SETSECONDCHANCECOMMAND_H_
