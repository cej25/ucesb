std::map<int, std::string> names = 
{
    { 0x100 , "FRS" },
    { 0x400 , "HPGe" },
    { 0x500 , "bPlast" },
    { 0x700 , "AIDA" },
    { 0x1500 , "Fatima VME" },
    { 0x1600 , "Fatima TAMEX" }, 
};

std::vector<int> expected = { 0x100, 0x400, 0x500, 0x700, 0x1500, 0x1600 };

static constexpr size_t AIDA_DSSDS = 3;
static constexpr size_t AIDA_FEES = 12;

std::map<int, int> aida_dssd_map =
{
  {3, 1},
  {1, 1},
  {4, 1},
  {2, 1},

  {7, 2},
  {5, 2},
  {8, 2},
  {6, 2},

  {11, 3},
  {9, 3},
  {12, 3},
  {10, 3}
};

std::vector<std::string> scalers =
{
  "bPlast Free",
  "bPlast Accepted",
  "FATIMA TAMEX Free",
  "FATIMA TAMEX Accepted",
  "FATIMA VME Free",
  "FATIMA VME Accepted",
  "Ge Free",
  "Ge Accepted",
  "bPlast Up",
  "bPlast Down",
  "bPlast AND",
  "SCI41 L",
  "SCI41 R",
  "SCI42 L",
  "SCI42 R"
};