---
tags:
  - plugin
resource_link: "https://www.redguides.com/community/resources/mq2farmtest.919/"
support_link: "https://www.redguides.com/community/threads/mq2farmtest.68086/"
repository: "https://github.com/RedGuides/MQ2FarmTest"
config: "MQ2FarmTest_Character.ini, FarmMobIgnored.ini"
authors: "ChatWithThisName, Sic"
tagline: "Will help you farm specific creatures or areas"
acknowledgements: "Farm.mac"
---

# MQ2FarmTest

<!--desc-start-->
MQ2FarmTest is designed around the concept of Farm.mac with the intent to assist with farming specific items or creatures or to act like a hunter type macro.
<!--desc-end-->
**Q) What can MQ2FarmTest do that Farm.mac cannot?**  
:    A) MQ2FarmTest has a couple of features that have been added to it that don't currently exist in Farm.mac such as the automatic selection and use of Combat Abilities with the option to customize the ability list via INI. It features custom functions written specifically for MQ2FarmTest which are slightly different than the functions written into core MQ to assist with making Farm.mac work exactly the way I want it to without the use of built in functions. Without the ability to write functions directly I would be at the mercy of the information made available to Macros though MQ2DataTypes.

**Q) What can Farm.mac do that MQ2FarmTest cannot?**  
:    A) Farm.mac has been updated more than a few times over the course of time since its conception and has been molded by the feature requests of the members here at Redguides. With that said, it not only is the model that MQ2FarmTest is based on, but it also already has all the features that I'm trying to include into MQ2FarmTest which may or may not be available at this point. MQ2FarmTest is in TESTING stages and not entirely ready for user consumption. However, with that said it will eventually catch up and surpass Farm.mac, it already has features I didn't think would be possible when writing Farm.mac, and I expect it shall continue to be improved as I write this plugin from the ground up.

**Known Issues**  
When a mob is running away, it will start to cast a spell and then start running after it while still casting.

## Commands

<a href="cmd-farm/">
{% 
  include-markdown "projects/mq2farmtest/cmd-farm.md" 
  start="<!--cmd-syntax-start-->" 
  end="<!--cmd-syntax-end-->" 
%}
</a>
:    {% include-markdown "projects/mq2farmtest/cmd-farm.md" 
        start="<!--cmd-desc-start-->" 
        end="<!--cmd-desc-end-->" 
        trailing-newlines=false 
     %} {{ readMore('projects/mq2farmtest/cmd-farm.md') }}

<a href="cmd-ignorethese/">
{% 
  include-markdown "projects/mq2farmtest/cmd-ignorethese.md" 
  start="<!--cmd-syntax-start-->" 
  end="<!--cmd-syntax-end-->" 
%}
</a>
:    {% include-markdown "projects/mq2farmtest/cmd-ignorethese.md" 
        start="<!--cmd-desc-start-->" 
        end="<!--cmd-desc-end-->" 
        trailing-newlines=false 
     %} {{ readMore('projects/mq2farmtest/cmd-ignorethese.md') }}

<a href="cmd-ignorethis/">
{% 
  include-markdown "projects/mq2farmtest/cmd-ignorethis.md" 
  start="<!--cmd-syntax-start-->" 
  end="<!--cmd-syntax-end-->" 
%}
</a>
:    {% include-markdown "projects/mq2farmtest/cmd-ignorethis.md" 
        start="<!--cmd-desc-start-->" 
        end="<!--cmd-desc-end-->" 
        trailing-newlines=false 
     %} {{ readMore('projects/mq2farmtest/cmd-ignorethis.md') }}

<a href="cmd-permignore/">
{% 
  include-markdown "projects/mq2farmtest/cmd-permignore.md" 
  start="<!--cmd-syntax-start-->" 
  end="<!--cmd-syntax-end-->" 
%}
</a>
:    {% include-markdown "projects/mq2farmtest/cmd-permignore.md" 
        start="<!--cmd-desc-start-->" 
        end="<!--cmd-desc-end-->" 
        trailing-newlines=false 
     %} {{ readMore('projects/mq2farmtest/cmd-permignore.md') }}

## Settings

Example FarmText_Character.ini

```ini
[General]
Debugging=false
useLogOut=false NOT CURRENTLY BEING USED
useEQBC=false NOT CURRENTLY BEING USED
useMerc=false NOT CURRENTLY BEING USED
CastDetrimental=false
[Pull]
ZRadius=30
Radius=500
PullAbility=melee NOT CURRENTLY BEING USED
[Health]
HealAt=65
HealTill=70
[Endurance]
MedEndAt=10
MedEndTill=100
[Mana]
MedAt=30
MedTill=100
[DiscRemove]
DiscRemove1=Hiatus
DiscRemove2=Mangling Discipline
DiscRemove3=Proactive Retaliation
DiscRemove4=Axe of Rekatok Rk. II
[DiscAdd]
DiscAdd1=Breather Rk. II
DiscAdd2=Disconcerting Discipline Rk. II
DiscAdd3=Frenzied Resolve Discipline Rk. II
DiscAdd4=Axe of the Aeons Rk. II
DiscAdd5=Cry Carnage Rk. II
```

MQ2FarmTest section for MQ2HUD.ini:

```ini
[MQ2Farm]
LineBreak1a=3,1035,780,225,255,255   ,${If[${Farm.TargetID},___________________________,]}
LineBreak1b=3,1035,795,225,255,255   ,   ${If[${Farm.TargetID},${Spawn[${Farm.TargetID}].CleanName},]}
LineBreak1c=3,1035,800,225,255,255   ,${If[${Farm.TargetID},___________________________,]}
TargetNameLvlText=3,1040,815,0,255,234  ,${If[${Farm.TargetID},Level:         Class:,]}
TargetNameLevel=3,1040,815,255,0,255  ,${If[${Farm.TargetID},           ${Spawn[${Farm.TargetID}].Level}                 ${Spawn[${Farm.TargetID}].Class},]}
TargetSpeedText=3,1040,830,0,255,234  ,${If[${Farm.TargetID},RunSpeed is: ,]}
TargetSpeed=3,1040,830,255,0,255   ,                       ${If[${Farm.TargetID},${Spawn[${Farm.TargetID}].Speed},]}
TargetPctHPText=3,1040,845,0,255,234  ,${If[${Farm.TargetID},Percent HP: ,]}
TargetPctHP=3,1040,845,255,0,255   ,                    ${If[${Farm.TargetID},${Spawn[${Farm.TargetID}].PctHPs},]}
LoSText=3,1040,860,0,255,234    ,${If[${Farm.TargetID},Line of Sight:,]}
LoS=3,1040,860,255,0,255     ,                      ${If[${Farm.TargetID},${LineOfSight[${Me.Y},${Me.X},${Me.Z}:${Spawn[${Farm.TargetID}].Y},${Spawn[${Farm.TargetID}].X},${Spawn[${Farm.TargetID}].Z}]},]}
TargetDistText=3,1040,875,0,255,234   ,${If[${Farm.TargetID},Distance:,]}
TargetDist=3,1040,875,255,0,255    ,                 ${If[${Farm.TargetID},${Spawn[${Farm.TargetID}].Distance} ,]}
TargetAnimText=3,1040,920,0,255,234   ,${If[${Farm.TargetID},Animation: ,]}
TargetAnim=3,1040,920,255,0,255    ,                  ${If[${Farm.TargetID},${Spawn[${Farm.TargetID}].Animation},]}
LineBreak1d=3,1035,935,0,255,234   ,${If[${Farm.TargetID},___________________________,]}
TargLocationText=3,1040,950,0,255,234  ,          ${If[${Farm.TargetID},TARGET LOCATION,]}
LineBreak1e=3,1035,970,0,255,234   ,${If[${Farm.TargetID},___________________________,]}
TargetLocation=3,1035,965,255,0,255   ,${If[${Farm.TargetID},X: ${Spawn[${Farm.TargetID}].Y} Y: ${Spawn[${Farm.TargetID}].X}  Z: ${Spawn[${Farm.TargetID}].Z},]}
TargetTypeText=3,1035,985,0,255,234   ,${If[${Farm.TargetID},Target Type:, ]}
TargetType=3,1035,985,255,0,255    ,                      ${If[${Farm.TargetID},${Spawn[${Farm.TargetID}].Type},]}
BodyTypeText=3,1035,1000,0,255,234   ,${If[${Farm.TargetID},Body Type:, ]}
BodyType=3,1035,1000,255,0,255    ,                    ${If[${Target.ID},${Spawn[${Farm.TargetID}].Body},]}
BG1a=3,1035,790,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1b=3,1035,800,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1c=3,1035,810,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1d=3,1035,820,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1e=3,1035,830,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1f=3,1035,840,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1g=3,1035,850,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1h=3,1035,860,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1i=3,1035,870,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1j=3,1035,880,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1k=3,1035,890,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1l=3,1035,900,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1m=3,1035,910,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1n=3,1035,920,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1o=3,1035,930,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1p=3,1035,940,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1q=3,1035,950,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1r=3,1035,960,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1s=3,1035,970,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1t=3,1035,980,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1u=3,1035,990,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
BG1v=3,1035,1000,0,0,0    ,${If[${Farm.TargetID},████████████████████,]}
```

## Top-Level Objects

## [Farm](tlo-farm.md)
{% include-markdown "projects/mq2farmtest/tlo-farm.md" start="<!--tlo-desc-start-->" end="<!--tlo-desc-end-->" trailing-newlines=false %} {{ readMore('projects/mq2farmtest/tlo-farm.md') }}

## DataTypes

## [Farm](datatype-farm.md)
{% include-markdown "projects/mq2farmtest/datatype-farm.md" start="<!--dt-desc-start-->" end="<!--dt-desc-end-->" trailing-newlines=false %} {{ readMore('projects/mq2farmtest/datatype-farm.md') }}

<h2>Members</h2>
{% include-markdown "projects/mq2farmtest/datatype-farm.md" start="<!--dt-members-start-->" end="<!--dt-members-end-->" %}
{% include-markdown "projects/mq2farmtest/datatype-farm.md" start="<!--dt-linkrefs-start-->" end="<!--dt-linkrefs-end-->" %}
