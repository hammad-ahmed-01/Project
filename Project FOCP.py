import pygame
import pygame_menu
import os
pygame.init()
pygame.mixer.init()
surface = pygame.display.set_mode((600, 400))

#..........................................................................................

def start_the_game():
 WIDTH, HEIGHT = 1000, 800
 WIN = pygame.display.set_mode((WIDTH, HEIGHT))
 pygame.display.set_caption("Destiny")
 FPS = 60
 MAX_BULLETS = 3
 HEALTH_FONT = pygame.font.SysFont("Raleway Black Italic",40)
 WINNER_FONT = pygame.font.SysFont("Adobe Garamond Pro",90)
 BORDER = pygame.Rect(495,0,10,800)
 BACKGROUNDMUSIC = pygame.mixer.Sound(os.path.join("Assets","dsc.wav"))
 HITSOUND = pygame.mixer.Sound(os.path.join("Assets","ace.wav"))
 GUARDIAN_HIT =pygame.USEREVENT + 1
 TANIKS_HIT = pygame.USEREVENT + 2
 GUARDIAN_IMAGE = pygame.image.load(os.path.join("Assets","guardian.png"))
 GUARDIAN = pygame.transform.scale(GUARDIAN_IMAGE, (100,90))
 TANIKS_IMAGE = pygame.image.load(os.path.join("Assets","taniks.png"))
 TANIKS = pygame.transform.scale(TANIKS_IMAGE, (100,90))
 BACKGROUND = pygame.transform.scale(pygame.image.load(os.path.join("Assets","OIP1.jpg")),(WIDTH,HEIGHT))

 def display_deco(guardian,taniks,taniks_bullets,guardian_bullets,taniks_health,guardian_health):
    WIN.blit(BACKGROUND,(0,0))
    pygame.draw.rect(WIN,(0,0,0),BORDER)
    TANIKS_HEALTH_TEXT = HEALTH_FONT.render("Health:" + str(taniks_health),1,(0,0,0))
    GUARDIAN_HEALTH_TEXT = HEALTH_FONT.render("Health:" + str(guardian_health),1,(0,0,0))
    WIN.blit(GUARDIAN_HEALTH_TEXT, (870,10))
    WIN.blit(TANIKS_HEALTH_TEXT, (10,10))
    WIN.blit(GUARDIAN,(guardian.x,guardian.y))
    WIN.blit(TANIKS, (taniks.x,taniks.y))
    
    for bullet in taniks_bullets:
        pygame.draw.rect(WIN,(255,0,0),bullet)
    for bullet in guardian_bullets:
        pygame.draw.rect(WIN,(255,255,0),bullet)
    pygame.display.update()

 def guardian_movement(keys_pressed,guardian):
    if keys_pressed[pygame.K_a] and guardian.x-5 > 0:
        guardian.x -= 5
    if keys_pressed[pygame.K_d] and guardian.x+5+guardian.width < BORDER.x:
        guardian.x += 5
    if keys_pressed[pygame.K_w] and guardian.y-5 > 0:
        guardian.y -= 5
    if keys_pressed[pygame.K_s] and guardian.y+5+guardian.height < HEIGHT-10:
        guardian.y += 5

 def taniks_movement(keys_pressed,taniks):
    if keys_pressed[pygame.K_LEFT] and taniks.x-5 > BORDER.x+BORDER.width:
        taniks.x -= 5
    if keys_pressed[pygame.K_RIGHT] and taniks.x+5+taniks.width < WIDTH:
        taniks.x += 5
    if keys_pressed[pygame.K_UP] and taniks.y-5>0:
        taniks.y -= 5
    if keys_pressed[pygame.K_DOWN] and taniks.y+5+taniks.height< HEIGHT-10:
        taniks.y += 5

 def handle_bullets(guardian_bullets,taniks_bullets,guardian,taniks):
    for bullet in guardian_bullets:
        bullet.x += 10
        if taniks.colliderect(bullet):
            pygame.event.post(pygame.event.Event(TANIKS_HIT))
            guardian_bullets.remove(bullet)
        elif bullet.x > WIDTH:
            guardian_bullets.remove(bullet)
            
    for bullet in taniks_bullets:
        bullet.x -= 10
        if guardian.colliderect(bullet):
            pygame.event.post(pygame.event.Event(GUARDIAN_HIT))
            taniks_bullets.remove(bullet)
        elif bullet.x < 0:
            taniks_bullets.remove(bullet)

 def draw_winner(text):
    draw_text = WINNER_FONT.render(text,1,(0,0,255))
    WIN.blit(draw_text,(WIDTH//2 - draw_text.get_width()//2, HEIGHT//2 - draw_text.get_height()//2))
    pygame.display.update()
    pygame.time.delay(2000)
    

 def main():
    guardian = pygame.Rect(200,300,100,90)
    taniks = pygame.Rect(800,300,100,90)
    guardian_bullets = []
    taniks_bullets = []
    BACKGROUNDMUSIC.play()
    BACKGROUNDMUSIC.set_volume(1)
    taniks_health = 5
    guardian_health = 5
    clock = pygame.time.Clock()
    run = True
    while run:
        clock.tick(FPS)
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                run = False
                pygame.quit()
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LCTRL and len(guardian_bullets) < MAX_BULLETS:
                    bullet = pygame.Rect(guardian.x + guardian.width , guardian.y + guardian.height//2-2,10,5)
                    guardian_bullets.append(bullet)
                    HITSOUND.play()
                    HITSOUND.set_volume(10)
                if event.key == pygame.K_RCTRL and len(taniks_bullets) < MAX_BULLETS:
                    bullet = pygame.Rect(taniks.x, taniks.y + taniks.height//2-2,10,5)
                    taniks_bullets.append(bullet)
                    HITSOUND.play()
                    HITSOUND.set_volume(10)
            if event.type==TANIKS_HIT:
                guardian_health -= 1
            if event.type==GUARDIAN_HIT:
                taniks_health -= 1
        winner_text = ""
        if taniks_health <= 0:
            BACKGROUNDMUSIC.stop()
            winner_text = "Taniks wins!"
        if guardian_health <= 0:
            BACKGROUNDMUSIC.stop()
            winner_text = "Guardian Wins!"
        if winner_text !="":
            BACKGROUNDMUSIC.stop()
            draw_winner(winner_text)
            menu.mainloop(surface)
            break
        
        keys_pressed = pygame.key.get_pressed()
        guardian_movement(keys_pressed,guardian)
        taniks_movement(keys_pressed,taniks)
        handle_bullets(guardian_bullets,taniks_bullets,guardian,taniks)
        display_deco(guardian,taniks,taniks_bullets,guardian_bullets,taniks_health,guardian_health)
    main()
 
 if __name__ == "__main__":
    main()

#.....................................................................................................
    
def mainmenu():
 global menu
 menu = pygame_menu.Menu('DESTINY', 400, 300, theme=pygame_menu.themes.THEME_SOLARIZED)
 menu.add.text_input('TANIKS :')
 menu.add.text_input('GUARDIAN :')
 menu.add.button('Start', start_the_game)
 menu.add.button('Quit', pygame_menu.events.EXIT)
mainmenu()
        
menu.mainloop(surface)
