/*
Copyright (C) 2014 CU Galaxies
*/

#ifndef EVENTTEFCLEARCOMMAND_H_
#define EVENTTEFCLEARCOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class EventTefClearCommand : public QueueCommand {
public:

	EventTefClearCommand(const String& name, ZoneProcessServer* server)
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

#endif //EVENTTEFCLEARCOMMAND_H_
