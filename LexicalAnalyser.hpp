# ifndef _LEXICAL_ANALYSER
    # define _LEXICAL_ANALYSER
    # ifndef CONFIGS
        # include <Configs.hpp>
    # endif // CONFIGS
    //-- Main Class Definition
    class LexicalAnalyser {
        private:
            //-- File
            int64_t line;
            int64_t count;
            int64_t column;
            std::string name;
            std::fstream file;
            //-- Detected Characters
            struct Character {
                char current;
                char last;
            };
            Character character;
            //-- Detected Words
            struct Word {
                std::string current;
                std::string last;
            };
            Word word;
        public:
            //-- Constructor
            LexicalAnalyser();
            //-- Destructor
            ~LexicalAnalyser();
            //-- Input File Loader
            bool Load();
            //-- Input Filer Reader
            void Read();
    };
# endif // LEXICAL_ANALYSER