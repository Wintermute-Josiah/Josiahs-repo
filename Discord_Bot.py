import random

from discord import Game
from discord.ext.commands import Bot

BOT_PREFIX = ("?", "!", ".") 
TOKEN = "NDUzMzMyNDgzOTk2Mzg1MzAw.Dfdo7g.QoWF_ASuC5kFlR2kq25-dEuvY0U"

client = Bot(command_prefix=BOT_PREFIX)

@client.command(name='Jesus', description='Ask yes or no questions', brief='It is magic', pass_context=True)
async def eight_ball(context):
    possible_responses = [
        'That is a hard NO!!',
        "So wrong it's right",
        'Why would you even ask',
        'Nooooo God, No GOD Please NOOOOO',
        'You just contracted AIDS',
        'YES',
        'Good question',
        
]
await client.say(random.choice(possible_responses) + " , " + context.message.author.mention)





@client.event
async def on_ready():
    await client.change_presence(game=Game(name="With your mom"))
    print("Logged in as " + client.user.name)


client.run(TOKEN)
