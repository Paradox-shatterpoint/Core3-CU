nien_nunb = Creature:new {
	objectName = "@mob/creature_names:nien_nunb",
	socialGroup = "rebel",
	faction = "rebel",
	level = 100,
	chanceHit = 1.000000,
	damageMin = 645,
	damageMax = 1000,
	baseXp = 9429,
	baseHAM = 24000,
	baseHAMmax = 30000,
	armor = 0,
	resists = {0,0,0,0,0,0,0,0,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = PACK,
	optionsBitmask = 264,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_patron_sullustan_01.iff"},
	lootGroups = {},
	conversationTemplate = "theme_park_rebel_mission_giver_convotemplate",
	weapons = {},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(nien_nunb, "nien_nunb")