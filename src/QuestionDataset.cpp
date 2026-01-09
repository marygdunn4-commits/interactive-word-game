#include "QuestionDataset.hpp"
#include <cstdlib>
#include <ctime>
#include <stdexcept>   

//all 50 questions in this dataset:
QuestionDataset::QuestionDataset()
    : sessions_played(0) {
    //seeds random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    //Light : Bright : Smart
    questions.push_back(SynonymQuestion(
        "Light",
        "Bright",
        "Smart",
        "The room grew (light/bright) as the sun came up.",
        "Everyone knew that Simone was very (bright/smart) for her age.",
        1));

    //Beautiful : Pretty : Quite
    questions.push_back(SynonymQuestion(
        "Beautiful",
        "Pretty",
        "Quite",
        "Greg thought Melissa was very (beautiful/pretty).",
        "Melissa though Greg was (pretty/quite) funny.",
        1));

    //Flower : Rose : Lifted
    questions.push_back(SynonymQuestion(
        "Flower",
        "Rose",
        "Lifted",
        "The (flower/rose) blossomed in the garden.",
        "The plane finally took off and (rose/lifted) from the ground.",
        1));

    //Smart : Fast : Diet
    questions.push_back(SynonymQuestion(
        "Smart",
        "Fast",
        "Diet",
        "Bob knew Carol would pick up French easily because she was (smart/fast).",
        "Ted’s weight dropped during his (fast/diet).",
        1));

    //Sprint : Run : Tear
    questions.push_back(SynonymQuestion(
        "Sprint",
        "Run",
        "Tear",
        "I (sprint/run) to the finish line.",
        "There is a (run/tear) in Kate's leggings.",
        1));

    //Equitable : Fair : Carnival
     questions.push_back(SynonymQuestion(
        "Equitable",
        "Fair",
        "Carnival",
        "The election was (equitable/fair) in its results.",
        "The fall (fair/carnival) has the best ferris wheel.",
        1));

    //Prepare : Fix : Repair
    questions.push_back(SynonymQuestion(
        "Prepare",
        "Fix",
        "Repair",
        "Doug helped his father (prepare/fix) dinner.",
        "Doug's father helped him (fix/repair) his bike.",
        2));

    //Character : Letter : Note
    questions.push_back(SynonymQuestion(
        "Character",
        "Letter",
        "Note",
        "Each (character/letter) in the alphabet is unique.",
        "Rosy appreciated the (letter/note) in her mailbox.",
        2));

    //Match : Game : Ready
    questions.push_back(SynonymQuestion(
        "Match",
        "Game",
        "Ready",
        "Doug had made it to the final (match/game) of the tournament.",
        "Melissa was (game/ready) for some healthy competition.",
        2));
    
    //Extravagant : Fancy : Imagine
    questions.push_back(SynonymQuestion(
        "Extravagant",
        "Fancy",
        "Imagine",
        "Ray thought the restaurant was too (extravagant/fancy) for his simple tastes.",
        "(Fancy/Imagine) my surprise when I won the raffle.",
        2));

    //Current : Present : Gift
    questions.push_back(SynonymQuestion(
        "Current",
        "Present",
        "Gift",
        "At the (current/present) moment, the store is closed.",
        "Emily unwrapped the birthday (present/gift) from her grandmother.",
        2));
    
    //Shrill : Ring : Band
     questions.push_back(SynonymQuestion(
        "Shrill",
        "Ring",
        "Band",
        "The phone's (shrill/ring) sounded from the kitchen.",
        "George could tell Lucas was married because of the wedding (ring/band) he wore.",
        3));
    
    //Expression : Face : Confront
    questions.push_back(SynonymQuestion(
        "Expression",
        "Face",
        "Confront",
        "Fred put on a happy (expression/face) for his daughter.",
        "After ten years, Bowen finally decided to (face/confront) his brother about that night.",
        3));
    
    //Form : Figure : Realize
    questions.push_back(SynonymQuestion(
        "Form",
        "Figure",
        "Realize",
        "Lucy could barely make out the (form/figure) in the distance.",
        "It took Kate years to (figure/realize) that Santa isn't real.",
        3));
    
    //Basin : Sink : Descend
    questions.push_back(SynonymQuestion(
        "Basin",
        "Sink",
        "Descend",
        "The dirty dishes are soaking in the (basin/sink).",
        "I jump into the water and (sink/descend) to the sand below.",
        3));
    
    //Collection : Set : Prepared
    questions.push_back(SynonymQuestion(
        "Collection",
        "Set",
        "Prepared",
        "You must have this (collection/set) of numbers to win the lottory.",
        "The rocket is (set/prepared) for launch.",
        3));
    
    //Noise : Sound : Well
    questions.push_back(SynonymQuestion(
        "Noise",
        "Sound",
        "Well",
        "The glass shattering made a loud (noise/sound).",
        "Despite all that he'd endured, Henry's health was still (sound/well).",
        3));
    
    //Intention : Point : Angle
    questions.push_back(SynonymQuestion(
        "Intention",
        "Point",
        "Angle",
        "The politician's misunderstood his debate opponent's (intention/point).",
        "The roof of the house comes to a sharp (point/angle).",
        3));
    
    //Only : Sole : Foot
    questions.push_back(SynonymQuestion(
        "Only",
        "Sole",
        "Foot",
        "I was the (only/sole) person left on the island.",
        "My (sole/foot) was dirty from walking with one shoe.",
        3));
         
    //Mildew : Mold : Shape
    questions.push_back(SynonymQuestion(
        "Mildew",
        "Mold",
        "Shape",
        "The (mildew/mold) growing in the basement had an unpleasent odor.",
        "The art teacher taught her students how to (mold/shape) their clay.",
        3));

    //Render : Draw : Conclude
    questions.push_back(SynonymQuestion(
        "Render",
        "Draw",
        "Conclude",
        "Jude used pencil and paper to (render/draw) a portrait of his mother.",
        "From the expression on Henry's face, Lucas could (draw/conclude) that he was unhappy.",
        3));

    //Strike : Punch : Vigor
    questions.push_back(SynonymQuestion(
        "Strike",
        "Punch",
        "Vigor",
        "The young boxer delivered the first (strike/punch).",
        "The skilled orator’s speech had plenty of (punch/vigor).",
        4));

    //Bar : Dive : Plunge
    questions.push_back(SynonymQuestion(
        "Bar",
        "Dive",
        "Plunge",
        "The (dive/bar) was packed with drunk people.",
        "It took all of Jenna's courage to (dive/plunge) into the deep end.",
        4));

    //Scorch : Burn : Convert
    questions.push_back(SynonymQuestion(
        "Scorch",
        "Burn",
        "Convert",
        "The fire caused William to (scorch/burn) his shirt.",
        "Aretha wants to (burn/convert) her album into a CD.",
        4));

    //Crucifix : Cross : Intersect
    questions.push_back(SynonymQuestion(
        "Crucifix",
        "Cross",
        "Intersect",
        "Above the church hung a (crucifix/cross).",
        "George was still made at Mohammed, so he tried not to (cross/interesct) paths with him.",
        4));
    
    //Draft : Sketch : Outline
    questions.push_back(SynonymQuestion(
        "Draft",
        "Sketch",
        "Outline",
        "The artist made a rough (draft/sketch) before starting the painting.",
        "Please turn in a (sketch/outline) of your paper by Friday.",
        4));

    //Pitch : Throw : Toss
    questions.push_back(SynonymQuestion(
        "Pitch",
        "Throw",
        "Toss",
        "The pitcher can (pitch/throw) the ball at ninety miles an hour.",
        "Could you (throw/toss) me that towel?",
        4));

    //Trip : Journey : Voyage
    questions.push_back(SynonymQuestion(
        "Trip",
        "Journey",
        "Voyage",
        "They planned a weekend (trip/journey) to the mountains.",
        "The explorers set out on a dangerous (journey/voyage) across the ocean.",
        4));
    
    //Figure : Graphic : Vivid
    questions.push_back(SynonymQuestion(
        "Figure",
        "Graphic",
        "Vivid",
        "Vanessa included many (figures/graphics) in her presentation.",
        "The author was known for including many (graphic/vivid) details.",
        4));

    //Novel : Book : Reserve
    questions.push_back(SynonymQuestion(
        "Novel",
        "Book",
        "Reserve",
        "She checked out the latest (novel/book) from the library.",
        "You should (book/reserve) your tickets ahead of time.",
        4));

    //Bark : Skin : Peel
    questions.push_back(SynonymQuestion(
        "Bark",
        "Skin",
        "Peel",
        "The tree's rough (bark/skin) was covered in moss.",
        "Carefully (skin/peel) the oranges before eating them.",
        4));

    //Plane : Level : Even
    questions.push_back(SynonymQuestion(
        "Plane",
        "Level",
        "Even",
        "The carpenter checked that the shelf was perfectly (plane/level).",
        "The score remained (level/even) until the final minute.",
        4));

    //Seal : Stamp : Mail
    questions.push_back(SynonymQuestion(
        "Seal",
        "Stamp",
        "Mail",
        "The envelope bore the official (seal/stamp) of the university.",
        "Don't forget to (stamp/mail) your application today.",
        4));

    //Spare : Extra : Luxury
    questions.push_back(SynonymQuestion(
        "Spare",
        "Extra",
        "Luxury",
        "Claire asked her classmate if she had any (spare/extra) pencils.",
        "The affordable hotel had a surprising amount of (extras/luxuries).",
        5));

    //Check : Bill : Beak
    questions.push_back(SynonymQuestion(
        "Check",
        "Bill",
        "Beak",
        "The couple asked the waiter for the (check/bill).",
        "The veterinarian looked inside the bird’s (bill/beak).",
        5));

    //Fair : Just : Only
    questions.push_back(SynonymQuestion(
        "Fair",
        "Just",
        "Only",
        "The judge tried to be completely (fair/just) in her ruling.",
        "There were (just/only) a few minutes left in the game.",
        5));

    //Scale : Climb : Ascend
    questions.push_back(SynonymQuestion(
        "Scale",
        "Climb",
        "Ascend",
        "The climbers had to (scale/climb) the icy wall.",
        "The balloon began to (climb/ascend) into the morning sky.",
        5));

    //Table : Postpone : Delay
    questions.push_back(SynonymQuestion(
        "Table",
        "Postpone",
        "Delay",
        "The committee voted to (table/postpone) the decision.",
        "Bad weather may (postpone/delay) the flight.",
        5));

    //Charge : Accuse : Blame
    questions.push_back(SynonymQuestion(
        "Charge",
        "Accuse",
        "Blame",
        "The police decided to (charge/accuse) the suspect with theft.",
        "It wasn't fair to (accuse/blame) him for the accident.",
        5));

    //Stamp : Mark : Grade
    questions.push_back(SynonymQuestion(
        "Stamp",
        "Mark",
        "Grade",
        "The document needs an official (stamp/mark) before it's valid.",
        "The teacher will (mark/grade) the exams tonight.",
        5));

    //Screen : Filter : Sift
    questions.push_back(SynonymQuestion(
        "Screen",
        "Filter",
        "Sift",
        "The company must (screen/filter) applicants carefully.",
        "You should (filter/sift) the flour to remove any lumps.",
        5));

    //Plant : Set : Arrange
    questions.push_back(SynonymQuestion(
        "Plant",
        "Set",
        "Arrange",
        "They plan to (plant/set) the young trees along the road.",
        "The decorator will (set/arrange) the chairs for the ceremony.",
        5));

    //Story : Plot : Field
    questions.push_back(SynonymQuestion(
        "Story",
        "Plot",
        "Field",
        "The (story/plot) of the film was hard to follow.",
        "Every spring Grandma planted seeds in the (plot/field) behind her house.",
        5));

    //Firm : Company : Guests
    questions.push_back(SynonymQuestion(
        "Firm",
        "Company",
        "Guests",
        "Amanda hoped to have a leadership position in the (firm/company) within five years.",
        "Oliver spent all night cleaning because he expected (company/guests) in the morning.",
        5));

    //Fix : Secure : Confident
    questions.push_back(SynonymQuestion(
        "Fix",
        "Secure",
        "Confident",
        "The mother (fixed/secured) the mittens to her son’s jacket.",
        "Up by 28 points, the quarterback felt (secure/confident) victory was near.",
        5));

    //Exercise : Drill : Bore
    questions.push_back(SynonymQuestion(
        "Exercise",
        "Drill",
        "Bore",
        "Carl made flash cards for math (exercises/drills).",
        "The first step of the project was to (drill/bore) a hole into a block of wood.",
        5));

    //Harbor : Retreat : Flee
    questions.push_back(SynonymQuestion(
        "Harbor",
        "Retreat",
        "Flee",
        "The summer camp was a (harbor/retreat) from the stresses of everyday life.",
        "The general ordered his troops to (retreat/flee).",
        5));

    //Behind : Rear : Raise
    questions.push_back(SynonymQuestion(
        "Behind",
        "Rear",
        "Raise",
        "Not used to rollerskating, Tilly frequently fell on her (behind/rear).",
        "Jeff read many books about how to (raise/rear) a child.",
        5));

    //Fit : Hold : Sway
    questions.push_back(SynonymQuestion(
        "Fit",
        "Hold",
        "Sway",
        "Robert accidentally bought more groceries than his car could (fit/hold).",
        "The crowd was under the (hold/sway) of the charming preacher.",
        5));

    //Catalog : List : Tilt
    questions.push_back(SynonymQuestion(
        "Catalog",
        "List",
        "Tilt",
        "The (catalog/list) of available options was extensive.",
        "The heavy waves made the boat (list/tilt).",
        5));

    //mark all questions as unused to start
    used.assign(questions.size(), false);
}

std::vector<SynonymQuestion> QuestionDataset::next_session() {
    if (sessions_played >= 5) {
        throw std::runtime_error("Maximum of 5 game sessions reached.");
    }

    int num_unused = 0;
    for (std::size_t i = 0; i < used.size(); ++i) {
        if (!used[i]) {
            num_unused++;
        }
    }

    if (num_unused < 10) {
        throw std::runtime_error("Not enough unused questions left for a full session.");
    }

    std::vector<int> avail_indices;
    for (std::size_t i = 0; i < used.size(); ++i) {
        if (!used[i]) {
            avail_indices.push_back(static_cast<int>(i));
        }
    }

    std::vector<SynonymQuestion> session_questions;
    session_questions.reserve(10);

    for (int ques = 0; ques < 10; ++ques) {
        int rand_pos = std::rand() % avail_indices.size();
        int index   = avail_indices[rand_pos];

        session_questions.push_back(questions[index]);
        used[index] = true;

        avail_indices[rand_pos] = avail_indices.back();
        avail_indices.pop_back();
    }

    sessions_played++;
    return session_questions;
}