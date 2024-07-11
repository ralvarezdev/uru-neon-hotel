ALTER TABLE Event_Types_Mapping
ADD CONSTRAINT uq_event_type_mapping UNIQUE(event_type_id, event_id);

ALTER TABLE Event_Attendees
ADD CONSTRAINT uq_event_attendees UNIQUE(user_id, event_id);

ALTER TABLE Event_Special_Guests
ADD CONSTRAINT uq_event_special_guests UNIQUE(user_id, event_id);

ALTER TABLE Event_Guests
ADD CONSTRAINT uq_event_guests UNIQUE(user_id, event_id);

ALTER TABLE Event_Subscriptions
ADD CONSTRAINT uq_event_subscriptions UNIQUE(user_id, event_id);