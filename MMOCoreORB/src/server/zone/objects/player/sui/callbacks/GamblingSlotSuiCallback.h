/*
 * GamblingSlotSuiCallback.h
 *
 *  Created on: 04/29, 2012
 *      Author: Elvaron
 */

#ifndef GAMBLINGSLOTSUICALLBACK_H_
#define GAMBLINGSLOTSUICALLBACK_H_

#include "server/zone/objects/player/sui/SuiCallback.h"
#include "server/zone/objects/player/sui/slotmachinebox/SuiSlotMachineBox.h"
#include "server/zone/objects/scene/SceneObjectType.h"
#include "server/zone/objects/player/PlayerObject.h"
#include "server/zone/managers/minigames/GamblingManager.h"

class GamblingSlotSuiCallback : public SuiCallback {
public:
	GamblingSlotSuiCallback(ZoneServer* server)
		: SuiCallback(server) {
	}

	void run(CreatureObject* player, SuiBox* suiBox, bool cancelPressed, Vector<UnicodeString>* args) {
		if (!suiBox->isListBox() || player == NULL)
			return;

		if (args->size() < 1)
			return;

		bool otherPressed = Bool::valueOf(args->get(0).toString());

		GamblingManager* manager = player->getZoneProcessServer()->getGamblingManager();

		Locker locker(manager);
		manager->handleSlot(player, cancelPressed, otherPressed);

	}
};

#endif /* GAMBLINGSLOTSUICALLBACK_H_ */
