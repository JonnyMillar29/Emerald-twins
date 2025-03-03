
Route106_MapScripts::
	.byte 0

Route106_EventScript_TrainerTipsSign::
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
	end

Route106_EventScript_Douglas::
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Kyla::
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Brayden::
	trainerbattle_single TRAINER_BRAYDEN_1, Route106_Text_BraydenIntro, Route106_Text_BraydenDefeated, Route106_EventScript_BraydenRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_BraydenRematch
	msgbox Route106_Text_BraydenPostBattle, MSGBOX_DEFAULT
	release
	end

Route106_EventScript_BraydenRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route106_Text_BraydenRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BRAYDEN_1
	release
	end

Route106_EventScript_BraydenRematch::
	trainerbattle_rematch TRAINER_BRAYDEN_1, Route106_Text_BraydenRematchIntro, Route106_Text_BraydenRematchDefeated
	msgbox Route106_Text_BraydenRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Jacob::
	trainerbattle_single TRAINER_JACOB, Route106_Text_JacobIntro, Route106_Text_JacobDefeated
	msgbox Route106_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "Advice on catching POKéMON with a ROD:\n"
	.string "Press the A Button if you get a bite.$"
