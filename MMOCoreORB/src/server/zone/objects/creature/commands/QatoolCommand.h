/*
Copyright (C) 2014 CU Galaxies
*/

#ifndef QATOOLCOMMAND_H_
#define QATOOLCOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class QatoolCommand : public QueueCommand {
public:

	QatoolCommand(const String& name, ZoneProcessServer* server)
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

#endif //QATOOLCOMMAND_H_
