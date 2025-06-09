# Arachisya

A thrilling 2D action RPG adventure game built with C++ and Raylib. Navigate through a vast desert world, battle dangerous enemies, and survive as long as you can!

![Game Start Screen]([./screenshots/start_screen.png](https://github.com/Ofir-Roz/Small_Games/assets/68872614/ba19ab2f-abd8-46a0-9b49-7feb1aa9065f))

## 🎮 Game Overview

Arachisya is a top-down action game where you control a brave knight exploring a hostile desert planet. Fight against various creatures including goblins, slimes, and mysterious intellect devourers while avoiding environmental hazards and managing your health.

![Gameplay Screenshot 1](./screenshots/gameplay_1.png)
![Gameplay Screenshot 2](./screenshots/gameplay_2.png)

## ✨ Features

- **Dynamic Combat System**: Real-time sword combat with weapon collision detection
- **Multiple Enemy Types**: 
  - Goblins: Fast and aggressive melee attackers
  - Slimes: Bouncy creatures with moderate speed
  - Intellect Devourers: Mysterious and dangerous entities
- **Health Management**: Dynamic health system with color-coded health display
- **Environmental Obstacles**: Navigate around rocks, logs, and signs
- **Immersive Audio**: Background music, sound effects for movement, combat, and enemy interactions
- **Animated Sprites**: Smooth character animations for idle and running states
- **Bounded World**: Large explorable desert map with boundary detection

## 🎯 How to Play

### Controls
- **WASD**: Move your character
- **SPACE**: Attack with your laser sword
- **ENTER**: Start the game (from title screen)

### Gameplay Mechanics
- Your health starts at 100 and decreases when enemies touch you
- Health display changes color based on your current health:
  - **Green**: 75+ health
  - **Yellow**: 45-74 health  
  - **Red**: Below 45 health
- Defeat enemies by attacking them with your sword (SPACE key)
- Avoid colliding with environmental props like rocks and logs
- Stay within the map boundaries to avoid getting stuck

### Victory Condition
Survive as long as possible while defeating enemies! The game ends when your health reaches zero.

## 🛠️ Technical Details

### Built With
- **C++**: Core game logic and object-oriented design
- **Raylib**: Graphics, audio, and input handling
- **Object-Oriented Architecture**: Clean separation with base classes and inheritance

### Class Structure
- `BaseCharacter`: Abstract base class for all game entities
- `Character`: Player character with movement, combat, and health systems
- `Enemy`: AI-controlled enemies with pathfinding and damage dealing
- `Prop`: Static environmental objects with collision detection
- `DynamicScreen`: Animated title screen management

### Audio Assets
- Background music for immersive gameplay
- Sound effects for:
  - Character movement (footsteps)
  - Sword attacks
  - Enemy defeat sounds
  - Game over music

## 🚀 Building and Running

### Prerequisites
- C++ compiler (GCC recommended)
- Raylib library
- Make build system

### Build Instructions
```bash
# Clone the repository
git clone [your-repo-url]
cd Arachisya

# Build the game
make

# Run the executable
./main.exe
```

### Dependencies
The game includes the necessary DLL files:
- `libgcc_s_dw2-1.dll`
- `libstdc++-6.dll`

## 📁 Project Structure

```
Arachisya/
├── main.cpp                    # Main game loop and initialization
├── Character.{h,cpp}           # Player character implementation
├── Enemy.{h,cpp}              # Enemy AI and behavior
├── BaseCharacter.{h,cpp}      # Base class for all characters
├── Prop.{h,cpp}               # Environmental objects
├── DynamicScreen.{h,cpp}      # Title screen management
├── Makefile                   # Build configuration
├── characters/                # Character sprites and animations
│   ├── knight_*.png          # Player character sprites
│   ├── goblin_*.png          # Goblin enemy sprites
│   ├── slime_*.png           # Slime enemy sprites
│   └── weapon_*.png          # Weapon sprites
└── nature_tileset/           # Game assets
    ├── *.png                 # Textures and backgrounds
    └── *.wav                 # Sound effects and music
```

## 🎨 Assets

The game features beautiful pixel art assets including:
- Detailed character sprite sheets with idle and running animations
- Environmental props (rocks, logs, signs)
- Desert-themed world map
- Space background for the title screen
- Professional sound effects and background music

## 🔧 Features in Detail

### Combat System
- Real-time collision detection between weapons and enemies
- Directional sword swinging with rotation animations
- Audio feedback for successful hits

### Enemy AI
- Pathfinding: Enemies move toward the player character
- Proximity detection: Enemies stop moving when close to avoid overlap
- Damage dealing: Continuous damage when in contact with player
- Death animations and sound effects

### World Design
- Large scrollable map with camera following the player
- Collision detection with environmental objects
- Boundary checking to keep player within playable area
- Scale-appropriate rendering for all game objects

## 🎵 Audio Design

Immersive audio experience featuring:
- Atmospheric background music
- Realistic footstep sounds during movement
- Satisfying sword attack sound effects
- Enemy defeat audio feedback
- Epic game over music

## 🎮 Game States

1. **Title Screen**: Animated opening with "Press Enter To Start"
2. **Gameplay**: Main game loop with combat and exploration
3. **Game Over**: Death screen with restart capability

## 🏆 Future Enhancements

Potential improvements for future versions:
- Multiple levels or areas to explore
- Power-ups and weapon upgrades
- More enemy types with unique abilities
- Save/load game functionality
- High score system
- Multiplayer support

## 📄 License

This project is open source. Feel free to fork, modify, and create your own versions!

## 🙏 Acknowledgments

- Built with the amazing [Raylib](https://www.raylib.com/) library
- Pixel art assets and sound effects enhance the retro gaming experience
- Inspired by classic top-down action RPGs

---

*Embark on your adventure in Arachisya - where survival meets action in a hostile desert world!*
