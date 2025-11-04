//Prototypes
bool AmIReady();
bool atob(char* x);
bool DiscReady(PSPELL);
bool HaveAggro();
bool IHaveBuff(PSPELL);
bool MeshLoaded();
bool NavActive();
bool NavPaused();
bool PathExists(unsigned long SpawnID);
bool SpellsMemorized();

unsigned long getFirstAggroed();
unsigned long SearchSpawns(char* szIndex);

float AmFacing(unsigned long ID);
float PathLength(unsigned long SpawnID);

inline bool Casting();
inline bool InGame();
inline float PercentMana(const PlayerClient* pSpawn);
inline float PercentHealth(const PlayerClient* pSpawn);
inline float PercentEndurance(const PlayerClient* pSpawn);

static MQPlugin* FindMQ2NavPlugin();

void CastDetrimentalSpells();
void CheckAlias();
void ClearTarget();
void DiscSetup();
void DoINIThings();
void FarmCommand(PlayerClient* pChar, char* Line);
void IgnoreThisCommand(PlayerClient* pChar, char* szLine);
void IgnoreTheseCommand(PlayerClient* pChar, char* szLine);
void ListCommands();
void NavCommand(char* szLine);
void NavEnd();
void NavigateToID(unsigned long ID);
void PermIgnoreCommand(PlayerClient* pchar, char* szline);
void PluginOn();
void PluginOff();
void RestRoutines();
void SummonThings(std::vector<PSPELL>);
void ShowSettings();
void UpdateSearchString();
void UseDiscs();
void VerifyINI(const char* ININame, const char* Section, const char* Key, const char* Default);

//End Prototypes