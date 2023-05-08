import os
import openai

openai.api_key = ("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")
openai_model = "text-davinci-003"

def generate_response(question):
    prompt = """Suggest some simple answers.

Question: What is the Earth?
Answer: Earth is the third planet from the Sun.
Question: What is the sun?
Answer: It is the closest star to the earth.
Question: {}
Answer:""".format(question.capitalize())

    response = openai.Completion.create(
        model=openai_model,
        prompt=prompt,
        temperature=1,
    )

    return response.choices[0].text

# Example usage
question = "What is the earth?"
result = generate_response(question)
print(question)
print(result)
